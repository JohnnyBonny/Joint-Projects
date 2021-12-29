#include <iostream>
#include "Userdata.h"
#include <conio.h>
#include <windows.h>
#include "BigInt.h"
#include <string.h>

using namespace std;

void executeClicks(){
    while (1){
        if (GetAsyncKeyState(0x01)){
            cout << "Left Mkey";
            Sleep(100);
        } else if (GetAsyncKeyState(0x09))
            break;
    }

    getch();
}

int main(){
    Userdata myscore = Userdata();
    cout << "My clicks:" << myscore.getUserClicks() << endl;
    printf("My clicksMultiplier:%.02f\n" , myscore.getClickMulitplier());
    printf("My passiveMultiplier:%.02f\n" , myscore.getPassiveMultiplier());

    myscore.setClickMulitplier(1.25);
    myscore.setPassiveMultiplier(1.25);
    myscore.setUserClicks(to_string(12456432133));
    cout << "\nMy clicks:" << myscore.getUserClicks() << endl;
    printf("My clicksMultiplier:%.02f\n" , myscore.getClickMulitplier());
    printf("My passiveMultiplier:%.02f\n" , myscore.getPassiveMultiplier());

    myscore.addtoClickMulitplier(.75);
    myscore.addtoPassiveMulitplier(.75);

    BigInt x("123472389473473897491");
    myscore.addtoUserClicks(x);
    cout << "\nMy clicks:" << myscore.getUserClicks() << endl;
    printf("My clicksMultiplier:%.02f\n" , myscore.getClickMulitplier());
    printf("My passiveMultiplier:%.02f\n" , myscore.getPassiveMultiplier());

    return 0;                                                                                               
}