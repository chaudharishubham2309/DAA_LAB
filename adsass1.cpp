#include<iostream>
#include<iomanip>
using namespace std;
class emp
{
	public:
	int emp_id;
	char emp_name[10];
	char emp_des[10];
	int emp_sal;
	long long int emp_mob;
	emp *next;
	void create_node();
	void display_node();
	void add_front();
	void add_node();
} *start;

void emp::create_node()
{
	emp *temp;
	temp=new emp;
	cout<<"\n Enter the employe id=";
	cin>>temp->emp_id;
	cout<<"\n Enter the employe name=";
	cin>>temp->emp_name;
	cout<<"\n Enter the employe designation=";
	cin>>temp->emp_des;
	cout<<"\n Enter the employe salary=";
	cin>>temp->emp_sal;
	cout<<"\n Enter the employe mobile no=";
	cin>>temp->emp_mob;
	
	temp->next=NULL;
	temp->next=start;
	start=temp;
}
void emp::display_node()
{
	int count=0;
	emp *temp;
	temp=new emp;
	temp=start;
	if(temp==NULL){
		cout<<"The list is empty"<<endl;
	}
	else{
		cout<<left<<setw(8)<<"ID"<<left<<setw(10)<<"Name"<<left<<setw(17)<<"Designation"<<left<<setw(12)<<"Salary"<<left<<setw(15)<<"Mobile No"<<endl;
		while(temp!=NULL){
			cout<<left<<setw(8)<<temp->emp_id<<left<<setw(10)<<temp->emp_name<<left<<setw(17)<<temp->emp_des<<left<<setw(12)<<temp->emp_sal<<left<<setw(15)<<temp->emp_mob<<endl;
			/*cout<<temp->emp_id<<"->";
			cout<<temp->emp_name<<"->";
			cout<<temp->emp_des<<"->";
			cout<<temp->emp_sal<<"->";
			cout<<temp->emp_mob<<"->"<<endl;*/
			temp=temp->next;
			count++;
		}
		cout<<"\n The no of node present in a list is="<<count<<endl;
	}
}

 void emp::add_front(){
     emp a;
	 emp *temp,*ptr;
	 temp=new emp;
	 ptr=new emp;
	
	cout<<"\n Enter the employe id=";
	cin>>ptr->emp_id;
	cout<<"\n Enter the employe name=";
	cin>>ptr->emp_name;
	cout<<"\n Enter the employe designation=";
	cin>>ptr->emp_des;
	cout<<"\n Enter the employe salary=";
	cin>>ptr->emp_sal;
	cout<<"\n Enter the employe mobile no=";
	cin>>ptr->emp_mob;
	temp=start;
	start=ptr;
	ptr->next=temp;
	
	 
 }
 void emp::add_node(){
	 emp *ptr;
	 ptr=new emp;
	 
	 cout<<"\n Enter the employe id=";
	cin>>ptr->emp_id;
	cout<<"\n Enter the employe name=";
	cin>>ptr->emp_name;
	cout<<"\n Enter the employe designation=";
	cin>>ptr->emp_des;
	cout<<"\n Enter the employe salary=";
	cin>>ptr->emp_sal;
	cout<<"\n Enter the employe mobile no=";
	cin>>ptr->emp_mob;
 }
	 
int main(){
	int ch;
	emp a;
	do{ 
	    cout<<"\n Menu \n1.Create A Node \n 2.Display a node";
		cout<<"\n Enter the choice"<<endl;
        cin>>ch;
        switch(ch){
         
         case 1:
            a.create_node();
            break;
         case 2:
             a.display_node();
             break;
			 
	     case 3:
		    a.add_front();
			break;
		}
	}
       while(ch!=4);
	return 0;
}	
   	
  
  
