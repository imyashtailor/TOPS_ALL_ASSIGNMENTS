//Single Inheritance in c++
#include<iostream>
using namespace std;

class Category{
	public:
		int cid;
		char cname[20];
		
		void getCategory(){
			cout<<"Enter the Category Id and Name = ";
			cin>>cid>>cname;
		}
};

class Product : public Category{
	public:
		int pid,pprice;
		char pname[20];
		
		void getProductData(){
			cout<<"Enter the Product Id Price and Name = ";
			cin>>pid>>pprice>>pname;
		}
		void showProduct(){
			cout<<"\n Catid="<<cid<<"\t catname="<<cname;
			cout<<"\n pid="<<pid<<"\t pname="<<pname;
			cout<<"\n price="<<pprice;
		}
};


int main()
{
	Product p1;
	p1.getCategory();
	p1.getProductData();
	p1.showProduct();
	
	return 0;
}