#include <string>

//invoice = bill 
class Invoice {
public:
    Invoice(std::string partNum, std::string description, int itemNum, int priceAmount) 
        : partNumber{partNum}, partDescription{description}, item{itemNum}, price{priceAmount}
    {
        VAT = 0.20;
        discount = 0;
    }
    void setPartNumber(std::string partNum) {
        partNumber = partNum;
    }
    std::string getPartNumber() const { return partNumber; }
    void setPartDescription(std::string description) {
        partDescription = description;
    }
    std::string getPartDescription() const { return partDescription; }
    void setItem(int itemNum) {
        item = itemNum;
    }
    int getItem() const { return item; }
    void setPrice(double priceAmount) {
        if (priceAmount > 0) {
            price = priceAmount;
        }
        
    }
    int getPrice() const { return price; }
    void setVAT(double vat) {
        if (vat > 0) {
            VAT = vat;
        }
        
    }
    double getVAT() const {return VAT;}
    void setDiscount(double discountPercent) {
        discount = discountPercent;
    }
    double getDiscount() const {return discount;}
    double getInvoiceAmount() {
        double amount{0};
        amount = (price - price * discount + price * VAT) * item;
        return amount;
    }
private:
    std::string partNumber;
    std::string partDescription;
    int item;
    int price;
    double VAT;
    double discount;
};