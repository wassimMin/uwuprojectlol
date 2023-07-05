#include <iostream>


using namespace std;

float calc_all (float exam,float td,float tp)
{
    return (((((td+tp))/2)*0.4)+(exam*0.6));
}

float calc_onyl2(float exam,float a)
{
    return ((a*0.4)+(exam*0.6));
}

int main(){
    cout << "Uni Calc" << '\n';
        cout<<'\n';
    cout<<"Unity @1 : "<<'\n';
    float unit1;
    for(size_t i = 1 ; i<3;i++)
    {
        float a,b,c;
        cout << "Enter Module "<<i<<" Exam :";
        cin>>a;
        cout << "Enter Module "<<i<<" TD :";
        cin>>b;
        cout << "Enter Module "<<i<<" TP :";
        cin>>c;
        float moy = calc_all(a,b,c);
         cout <<"Moy: "<<moy <<'\n';
         unit1+=moy;
         
    }
    
    unit1 = unit1/2;

     float unit2;
    cout<<"Unity @2 : "<<'\n';
    for(size_t i = 1 ; i<3;i++)
    {
        float a,b,c;
        cout << "Enter Module "<<i<<" Exam :";
        cin>>a;
        cout << "Enter Module "<<i<<" TD :";
        cin>>b;
        cout << "Enter Module "<<i<<" TP :";
        cin>>c;
        float moy = calc_all(a,b,c);
         cout <<"Moy: "<<moy <<'\n';
     unit2+=moy;
    }
    unit2 = unit2/2;

       float unit3;
    cout<<"Unity @3 : "<<'\n';
    for(size_t i = 1 ; i<3;i++)
    {
        float a,c;
        cout << "Enter Module "<<i<<" Exam :";
        cin>>a;
        cout << "Enter Module "<<i<<" TP :";
        cin>>c;
        float moy = calc_onyl2(a,c);
         cout <<"Moy: "<<moy <<'\n';
     unit3+=moy;
    }
    unit3 = unit3/2;

    float unit4;
       cout<<"Enter Unit @4 Exam : ";
       cin>>unit4;

    float moyenne = ((unit1*3+unit1*3) + (unit2*3+unit2*2) + (unit3*2+unit3*2) + unit4 ) / (3+3+3+2+2+2+1);
    cout <<"Moyenne : "<<moyenne <<'\n';   
}
