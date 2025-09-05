#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    unsigned int lap;
    double sponsorshipRate;
    double contribution;
    double totalFund{0};

    while(true) {
        cout << "Enter laps completed (-1 to end): ";
        cin >> lap;
        if (lap == -1) {
            cout << "Total funds raised: " << fixed << setprecision(2) << totalFund << endl;
            break;
        }
        cout << "Enter sponsorship rate: ";
        cin >> sponsorshipRate;

        if (lap <= 40) {
            contribution = sponsorshipRate * lap;
        }
        else {
            contribution = sponsorshipRate * lap + 0.5 * sponsorshipRate * (lap - 40);
        }

        totalFund += contribution;

        cout << "Student contribution: " << fixed << setprecision(2) << contribution << endl;
        cout << endl;
    }
}