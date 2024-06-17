#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>

class Invoice{
    protected:
    int invoiceId;
    int dollarsOwed;
    public:
    Invoice(int invoiceId){
        this->invoiceId = invoiceId;
        dollarsOwed = 0;
    }
    void addServiceCost(int costDollars){
        dollarsOwed = dollarsOwed + costDollars;
    }
    int getDollarsOwed(){
        return dollarsOwed;
    }
    int getInvoiceId(){
        return invoiceId;
    }
};



#endif