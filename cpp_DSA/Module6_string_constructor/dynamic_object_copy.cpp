#include<bits/stdc++.h>
using namespace std;
class Criketer{
    public:
    string country;
    int jersey;
    Criketer(string country,int jersey)
    {
        this->country=country;
        this->jersey=jersey;
    }
};
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    Criketer *kuholi=new Criketer("India",100);
    Criketer *Ten=new Criketer("India",10);
    // Ten=kuholi; ekta delete korle oita heap theke delete hbe 
    // delete kuholi;
    // cout<<kuholi->jersey<<endl;
    // cout<<Ten->jersey<<endl;

    // Ten->country=kuholi->country;
    // Ten->jersey=Ten->jersey;
    *(Ten)=*(kuholi);
    delete kuholi;
    cout<<Ten->country<<endl;
    return 0;
}