#include<iostream>
using namespace std;

int main()

{
    int score;
    cout<<"Enter your score: ";
    cin>> score;

    if (score>=70){
        cout<<"Your grade is A";

    }
    else if(score>=60){
        cout<<"Your grade is B";

    }
    else if (score>=50){
        cout<< "Your grade is C";


    }
    else if (score>=40){
        cout<<"Your grade is D";

    }
    else {
        cout<< "Your grade is F";
    }
}
