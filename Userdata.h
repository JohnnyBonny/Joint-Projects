
#ifndef JOINT_PROJECTS_USERDATA_H
#define JOINT_PROJECTS_USERDATA_H

#include <string.h>
//#include <iostream>
#include "BigInt.h"

using namespace std;
 
class Userdata{
    private:
    BigInt userClicks; // number of clicks for the user
    double passiveMultiplier; // number of passive clicks per second
    double clickMultiplier; //muliplier of clicks the users recieves when they click

    public:
        Userdata(){
            //number of userClicks is determined in the private variable
            passiveMultiplier = 1.0;
            clickMultiplier = 1.0;
        };

        // returns the number of clicks the users has 
        BigInt getUserClicks(){
            return userClicks;
        };

        //returns the passive multiplier of user
        double getPassiveMultiplier(){
            return passiveMultiplier;
        };

        //returns the multiplier when the user manually clicks
        double getClickMulitplier(){
            return clickMultiplier;
        };

        //sets the user's clicks
        void setUserClicks(BigInt x){
            userClicks = x;
        };

        //sets the user's passive multiplier
        void setPassiveMultiplier(double x){
            passiveMultiplier = x;
        };

        //sets the click multiplier
        void setClickMulitplier(double x){
            clickMultiplier = x;
        };
        
        //adds to the user's clicks
        void addtoUserClicks(BigInt x){
            userClicks = (userClicks + x);
        };

        //adds to the Passive Multiplier
        void addtoPassiveMulitplier(double x){
            passiveMultiplier += x;
        };

        //adds to the click multiplier
        void addtoClickMulitplier(double x){
            clickMultiplier += x;
        };
        
        //subs to the click multiplier
        void subtoUserClicks(BigInt x){
            userClicks = (userClicks - x);
        };
        
        
};
#endif //JOINT_PROJECTS_USERDATA_H