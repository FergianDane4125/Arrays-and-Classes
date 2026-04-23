// Chap 15 Practice 113 Smart E-Commerce Billing and Payment Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class BillCalculator
{
    public:
        int calculateBill(int product_price, int shipping_charge)
        {
            return product_price + shipping_charge;
        }

        double calculateBill(double product_price, double tax_rate)
        {
            return product_price + (product_price * tax_rate);
        }

        double calculateBill(double product_price, double tax_rate, double discount)
        {
            return product_price + (product_price * tax_rate) - discount;
        }
};

class PaymentMethod
{
    protected:
        string customer_name;
        double amount;
        string transaction_id;

    public:
        void setPaymentDetails(string customer_name, double amount, string transaction_id)
        {
            this->customer_name = customer_name;
            this->amount = amount;
            this->transaction_id = transaction_id;
        }

        void displayPaymentDetails() const
        {
            cout << "----- PAYMENT DETAILS -----" << endl;
            cout << "Customer Name: " << customer_name << endl;
            cout << "Transaction ID: " << transaction_id << endl;
            cout << "Amount: " << amount << endl;
        }

    virtual void pay() = 0;
};

class UPIPayment : public PaymentMethod
{
    private:
        string upi_id;

    public:
        void setUPI(string upi_id)
        {
            this->upi_id = upi_id;
        }

        void pay() override
        {
            cout << "Payment Method: UPI" << endl;
            cout << "UPI ID: " << upi_id << endl;
            cout << "UPI payment successful" << endl;
        }
};

class CardPayment : public PaymentMethod
{
    private:
        string bank_name;

    public:
        void setBankName(string bank_name)
        {
            this->bank_name = bank_name;
        }

        void pay() override
        {
            cout << "Payment Method: Card" << endl;
            cout << "Bank Name: " << bank_name << endl;
            cout << "Card payment successful" << endl;
        }
};

class WalletPayment : public PaymentMethod
{
    private:
        string wallet_name;

    public:
        void setWalletName(string wallet_name)
        {
            this->wallet_name = wallet_name;
        }

        void pay() override
        {
            cout << "Payment Method: Wallet" << endl;
            cout << "Wallet Name: " << wallet_name << endl;
            cout << "Wallet payment successful" << endl;
        }
};

int main()
{
    string input_customer_name;
    int input_product_price;
    int input_shipping_charge;
    double input_tax_rate;
    double input_discount;
    string input_upi_id;
    string input_bank_name;
    string input_wallet_name;

    cin >> input_customer_name;
    cin >> input_product_price;
    cin >> input_shipping_charge;
    cin >> input_tax_rate;
    cin >> input_discount;
    cin >> input_upi_id;
    cin >> input_bank_name;
    cin >> input_wallet_name;

    BillCalculator bill_calculator;

    int total_with_shipping = bill_calculator.calculateBill(input_product_price, input_shipping_charge);
    double total_with_tax = bill_calculator.calculateBill((double)input_product_price, input_tax_rate);
    double total_with_tax_discount = bill_calculator.calculateBill((double)input_product_price, input_tax_rate, input_discount);

    cout << "----- BILL DETAILS -----" << endl;
    cout << "Customer Name: " << input_customer_name << endl;
    cout << "Total using product price and shipping:" << endl;
    cout << total_with_shipping << endl;
    cout << "Total using product price and tax: " << total_with_tax << endl;
    cout << "Total using product price, tax, and discount: " << total_with_tax_discount << endl;

    PaymentMethod* payment_pointer;

    UPIPayment upi_payment;
    upi_payment.setPaymentDetails(input_customer_name, total_with_tax_discount, "TXN1001");
    upi_payment.setUPI(input_upi_id);

    payment_pointer = &upi_payment;
    payment_pointer->displayPaymentDetails();
    payment_pointer->pay();

    CardPayment card_payment;
    card_payment.setPaymentDetails(input_customer_name, total_with_tax_discount, "TXN1002");
    card_payment.setBankName(input_bank_name);

    payment_pointer = &card_payment;
    payment_pointer->displayPaymentDetails();
    payment_pointer->pay();

    WalletPayment wallet_payment;
    wallet_payment.setPaymentDetails(input_customer_name, total_with_tax_discount, "TXN1003");
    wallet_payment.setWalletName(input_wallet_name);

    payment_pointer = &wallet_payment;
    payment_pointer->displayPaymentDetails();
    payment_pointer->pay();

    return 0;
}
