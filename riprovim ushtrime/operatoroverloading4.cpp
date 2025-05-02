
#include <iostream>
#include <cstring>
using namespace std;

class cloth
{
    friend ostream& operator<<(ostream &o, const cloth& c)
    {
         cout<<"\nCloth code, color, size:  ";
            o<<c.code<<"\t"<<c.color<<"\t"<<c.size<<endl;
            return o;
    }
    
    friend istream& operator>>(istream &input, cloth &c)
    {
         cout<<"\nIntput the code: ";
           input>>c.code;
           cout<<"\nIntput the color: ";
           input>>c.color;
           cout<<"\nIntput the size (XXS, XS, S, ...., XXXL): ";
           input>>c.size;
           
           return input;
    }
    private: 
        int code;
        char* color;
        string size;
    public:   
    
        const cloth operator+(const cloth &c)
        {
            cloth res;
            res.code=this->code+ c.code;
            int n=strlen(this->color) + strlen(c.color)+2;
            res.color=new char [n];
            int i;
            for (  i=0; i< strlen(this->color); i++)
            res.color[i]=this->color[i];
            
            res.color[i]= '\\';
            
            for ( int j=i+1; j<i+strlen(c.color); j++)
             res.color[i]=c.color[i];
            
            res.color[n]='\n';
            
            res.size=this->size + "/" + c.size;
            return res;
        }
        
        cloth &operator++()
        {
            if (this->size=="XXS") size="XS";
            else if (this->size=="XS") size="S";
               else if (this->size== "S") size="M";
                 else if (this->size== "M") size="L";
                 else if (this->size== "L") size="XL";
                  else if (this->size== "XL") size="XXL";
                   else if (this->size== "XXL") size="XXXL";
                 else cout<<"\nInvalid Size!";
            
            return (*this);
        }
        
        /*bool operator>(const cloth& c)
        {
            return (this->size<c.size)
        }*/
        
        const cloth &operator=(const cloth& c)
        {
            code=c.code;
            
            int n=strlen(c.color);
            color=new char[n+1];
            strcpy(color, c.color);
            color[n]='\0';
            
            size=c.size;
            
            return (*this);
        }
        
        
        cloth (int c=0, char* col=(char*)"white", string s="XS" )
        {
            code=c;//setcode(c);
            
            int n=strlen(col);
            color=new char[n+1];
            strcpy(color, col);
            color[n]='\0';
            
            size=s;
            
        }
      
      
       cloth (cloth &c )
        {
            code=c.code;
            
            int n=strlen(c.color);
            color=new char[n+1];
            strcpy(color, c.color);
            color[n]='\0';
            
            size=c.size;
            
        }
          
       
       
       char* getcolor(){return color;} 
       int getcode(){return code;}
       string getsize(){return size;}
       
       void setcolor(char *col)
       {
            int n=strlen(col);
            color=new char[n+1];
            strcpy(color, col);
            color[n]='\0';  
       }
       
       void setcode(int c)
       {
           code=(c<0? 0: c);
       }
       
       void setsize (string s)
       {
           if (s!="XXS" || s!="XS" || s!="S" || s!="M" || s!="L" || s!="XL" || s!="XXL" || s!="XXXL")
           size="L";
           else size=s;
       }
       
       void input()
       {
           cout<<"\nIntput the code: ";
           cin>>code;
           cout<<"\nIntput the color: ";
           cin>>color;
           cout<<"\nIntput the size (XXS, XS, S, ...., XXXL): ";
           cin>>size;
       }
       
       void output()
       {
           cout<<"\nCloth code, color, size:  "
               <<code<<"\t"<<color<<"\t"<<size<<endl;
       }
};

int main()
{
    cloth c1, c2, c3(0, " ", "S"), sum;
    cout<<"\nInput data about cloth c1:\n";
    cin>>c1;
    cout<<"\nInput data about cloth c2:\n";
    cin>>c2;
    
    cout<<c1<<c2;
    
    sum=c1+c2;
    cout<<sum;
    
    ++c1;
    cout<<c1;

    return 0;
}
