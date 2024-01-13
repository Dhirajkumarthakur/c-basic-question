#include<iostream>
using namespace std;

int main(){
float total_amt,amt,sub_total,tax_amt,qty,val,discount,tax,discount_amt;
cout<<"enter the quantity of item sold:"<<endl;
cin>>qty;
cout<<"enter the value  of item :"<<endl;
cin>>val;
cout<<"enter the discount percentage :"<<endl;
cin>>discount;
cout<<"enter the tax:"<<endl;

cin>>tax;

amt=qty*val;

discount_amt=(amt*discount)/100.0;
sub_total=amt-discount_amt;
tax_amt=(sub_total*tax)/100.0;
total_amt=sub_total+tax_amt;

cout <<"***********************BiLL**************************"<<endl;

cout<<"quantity sold:"<<qty<<endl;
cout<<"price per item:"<<val<<endl;
cout<<"*************"<<endl;
cout<<"Amount:"<<amt<<endl;
cout<<"discount:"<<discount_amt<<endl;
cout<<"discaunt total:"<<sub_total<<endl;
cout<<"tax:"<<tax_amt<<endl;
cout<<"**************"<<endl;

cout<<"totalamaount:"<<total_amt<<endl;



    return 0;
}
