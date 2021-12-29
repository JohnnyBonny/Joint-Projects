#ifndef JOINT_PROJECTS_SHOP_H
#define JOINT_PROJECTS_SHOP_H
/*
#include <iostream>

#include <windows.h>

#include <string.h>
*/
#include "BigInt.h"
#include <cstdio>
#include "Userdata.h"
#include <cstdint>

//gathers variables from the clickergame.cpp
extern Userdata myscore;
extern int userInput;

class Shop{
    private: 
        int PricePassiveMultiplier; //The price of Passive Multiplier
        int PriceClickerMuliplier; //The price of Clicker Multiplier
        double storeClickerMultiplier; //the Clicker Multiplier value in the store
        double storePassiveMuliplier; //the Passive Multiplier value in the store
    public:
        Shop(){
            PriceClickerMuliplier = 55;
            storeClickerMultiplier = 5;
            PricePassiveMultiplier = 55;
            storePassiveMuliplier = 2.5; 
        };
        
        void storeMenu(){
            while(1){
            printf("You own %o clicks\n", &myscore.getUserClicks);
            printf("1) increase Clicker Multiplier by %.02f,For %o clicks\n", storeClickerMultiplier, PriceClickerMuliplier);
            printf("2) increase Passive Multiplier by %.02f,For %o clicks\n", storePassiveMuliplier, PricePassiveMultiplier);
            cout <<"3)Exit the Store.\n" << endl;
            cout << "Please select an option" << endl;
            cin >> userInput;
            if(userInput == 1 || userInput == 2 || userInput == 3 || userInput == 4 ){
                break;
            }
            }
        };
        
        void increaseStoreClickerMultiplier(){
            BigInt *dummy = (BigInt *) malloc(sizeof(&myscore.getUserClicks));
            if(*dummy >= PriceClickerMuliplier){
                myscore.addtoClickMulitplier(storeClickerMultiplier);
                PriceClickerMuliplier *= 1.5;
                storeClickerMultiplier *= 2.5;
                myscore.subtoUserClicks(PriceClickerMuliplier);
            }
            else
                cout << "Sorry, not enough clicks!!" << endl;
            delete dummy; //my decision to include this is so that we are not wasting memory
        };

        void increaseStorePassiveMuliplier(){
            BigInt *dummy = (BigInt *) malloc(sizeof(&myscore.getUserClicks));
            if(*dummy >= PricePassiveMultiplier){
                myscore.addtoPassiveMulitplier(storePassiveMuliplier);
                PricePassiveMultiplier *= 1.5;
                storePassiveMuliplier *= 2;
                myscore.subtoUserClicks(PricePassiveMultiplier);
            }
            else
                cout << "Sorry, not enough clicks!!" << endl;

            delete dummy; //my decision to include this is so that we are not wasting memory
        };
};

#endif //JOINT_PROJECTS_SHOP_H