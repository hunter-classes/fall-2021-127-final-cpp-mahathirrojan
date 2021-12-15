#include <iostream> 

void isRightTriangle(int a, int b, int c){
    // This function takes the first 2 parameters (a and b),which are the legs
    // and does the Pythagorean Theorem 
    // To see if the square of a and b match with c (hypotenuse). if it does, it should return True
    // If the math does not add up, it should return False 
    if(a*a + b*b == c*c){
        std::cout << "True" << std::endl; 
    }else{
        std::cout << "False" << std::endl; 
    }
}

void fizzbuzz(int n){
    // I set the parameter to how much the loop will go up to. 
    // for example, setting the parameter will make the parameter go
    // from 1 to 21. 
    int i; 
    for (i=1;i<=n;i=i+1){
        if(i % 15 == 0){
            std::cout << "Fizzbuzz" << std::endl; 
        }else if(i % 5 == 0){
            std::cout<< "Buzz" << std::endl;
        }else if (i % 3 == 0){
            std::cout << "Fizz" << std::endl; 
        }else{
            std::cout << i << std::endl; 
        }
    }
}

int main(){
    std::cout << "------Question 1-------" <<std::endl; 
    isRightTriangle(3,4,5);
    isRightTriangle(8,9,10);
    std::cout << "------Question 2-------" <<std::endl;
    fizzbuzz(21);
    return 0; 
}