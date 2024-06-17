#ifndef INVOICETEST_H
#define INVOICETEST_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        // Add other test methods here
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice(1234);
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) { 
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice(3424);
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }
        {
            Invoice invoice(2342);
            invoice.addServiceCost(5);
            if (invoice.getDollarsOwed() != 5) {
                std::cout << "Test 3 failed!" << std::endl;
            }
            invoice.addServiceCost(3);
            if (invoice.getDollarsOwed() != 8) {
                std::cout << "Test 4 failed!" << std::endl;
            }
            if (invoice.getInvoiceId() != 2342) {
                std::cout << "Test 5 failed!" << std::endl;
            }

        }

        // Add more test cases here
    }

    // Add other test functions here
};

#endif