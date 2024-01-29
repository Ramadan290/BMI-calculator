#include <stdio.h>


void calc_male(float height , float weight){
    float bmi;
    bmi = weight / (height * height);

    printf("Your Body Mass Index(BMI) is %f\n", bmi);

    if(bmi < 15)
    {
        printf("Your BMI category is: Starvation\n");
    }
    else if(bmi >= 15.1 && bmi <= 17.5)
    {
        printf("Your BMI category is: Anorexic\n");
    }
    else if(bmi >= 17.6 && bmi <= 18.5)
    {
        printf("Your BMI category is: Underweight\n");
    }
    else if(bmi >= 18.6 && bmi <= 24.9)
    {
        printf("Your BMI category is: Ideal\n");
    }
    else if(bmi >= 25 && bmi <= 25.9)
    {
        printf("Your BMI category is: Overweight\n");
    }
    else if(bmi >= 30 && bmi <= 30.9)
    {
        printf("Your BMI category is: Obese\n");
    }
    else if(bmi >= 40)
    {
        printf("Your BMI category is: Morbidly Obese\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
}

void calc_female(float height , float weight){
    float bmi;

    bmi = weight / (height * height);

    printf("Your Body Mass Index(BMI) is %f\n", bmi);

    if(bmi < 15)
    {
        printf("Your BMI category is: severe underweight\n");
    }
    else if(bmi >= 15.1 && bmi <= 17.5)
    {
        printf("Your BMI category is: Anorexic\n");
    }
    else if(bmi >= 17.6 && bmi <= 18.5)
    {
        printf("Your BMI category is: Underweight\n");
    }
    else if(bmi >= 18.6 && bmi <= 24.9)
    {
        printf("Your BMI category is: Normal Weight\n");
    }
    else if(bmi >= 25 && bmi <= 29.9)
    {
        printf("Your BMI category is: Overweight\n");
    }
    else if(bmi >= 30 && bmi <= 34.9)
    {
        printf("Your BMI category is: Obesity Class I\n");
    }
      else if(bmi >= 35 && bmi <= 39.9)
    {
        printf("Your BMI category is: Obesity Class II\n");
    }
    else if(bmi >= 40)
    {
        printf("Your BMI category is: Morbidly Obese\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
}

int main(){
    int x ;
    float height , weight;

    printf("**********BMI Calculator**********\n");
    printf("\nEnter person's Information: \n \n");


    printf("Enter your height (in meters) :\n");
    scanf("%f", &height);

    printf("Enter your weight (in kilograms) : \n");
    scanf("%f", &weight);

    printf("Enter your Gender 1 for Male and 2 for Female: \n");
    scanf("%d",&x);

    if(x== 1 ){
        calc_male(height,weight);
    }
    else if(x== 2 ){
        calc_female(height,weight);
    }


}
