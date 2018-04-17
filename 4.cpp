#include<iostream>
#include<cmath>
#include<string>
#include<vector>
  std::string destinoc="destino";
  std::string auxiliarc="auxiliar";
  std::string  origenc= "origen";
std::string des=destinoc;
std::string aux=auxiliarc;
std::string orig=origenc;
int cambio(int a, int d);
int hanoi(int n, int a, int d, int e);
int main ()
{

  int n=0;
  std::cout<<"escribe el numero de discos"<<std::endl;
  std::cin>>n;
  hanoi(n,0,0,n);
  return 0;
}

int hanoi(int n, int a, int d, int e)
{ 
  int origen=n;
  int auxiliar=a;
  int destino=d;
  std::vector<int> x(n);
  for(int ii=0;ii<n;++ii)
    {
      x[ii]=ii;
    }
   while(destino!=e)
    {
   if(origen%2==0)
     { 
        std::cout<<"mover disco "<<x[0]<<" a la varilla "<<aux<<std::endl;
	std::cout<<"mover disco "<<x[1]<<" a la varilla "<<des<<std::endl;
	std::cout<<"mover  disco "<<x[0]<<" a la varilla "<<des<<std::endl;
	std::cout<<"mover disco "<<x[2]<<" a la varilla "<<aux<<std::endl;
	std::cout<<"mover disco "<<x[0]<<" a la varilla "<<orig<<std::endl;
	std::cout<<"mover disco "<<x[1]<<" a la varilla "<<aux<<std::endl;
	std::cout<<"mover disco "<<x[0]<<" a la varilla "<<aux<<std::endl;
	std::cout<<"mover disco "<<x[3]<<" a la varilla "<<des<<std::endl;
	des=destinoc;
	orig=auxiliarc;
	aux=origenc;
	return hanoi(a+3 ,n-4,d+1,e);
     }
   else
     {
        std::cout<<"mover disco "<<x[0]<<" a la varilla "<<des<<std::endl;
	std::cout<<"mover disco "<<x[1]<<" a la varilla "<<aux<<std::endl;
	std::cout<<"mover  disco "<<x[0]<<" a la varilla "<<aux<<std::endl;
	std::cout<<"mover disco "<<x[2]<<" a la varilla "<<des<<std::endl;
	std::cout<<"mover disco "<<x[0]<<" a la varilla "<<orig<<std::endl;
	std::cout<<"mover disco "<<x[1]<<" a la varilla "<<des<<std::endl;
	std::cout<<"mover disco "<<x[0]<<" a la varilla "<<des<<std::endl;
	if(e-1-a==0)
	  {
	  }
	else{
	std::cout<<"mover disco "<<x[e-1-a]<<" a la varilla "<<aux<<std::endl;
	des=auxiliarc;
	orig=destinoc;
	aux=origenc;
	return hanoi(d+3,n,a-3,e);
	}
     }
	
  }
    }

       

      
      
  
  
