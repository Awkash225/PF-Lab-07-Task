#include<stdio.h>
#include<string.h>
int main(){
	//Code by Awkash 25K0627 :)
	//         Added Comments for clear understanding
	
    int i, original_scores[50], sum=0, count=0, k, normalized_scores[50], max=original_scores[0];
    double average=0.0;
    
                    //1. Input Portion
    printf("Enter score of fifty students [Score LIMIT ~ 1-100]\n");
    for(i=1;i<=50;i++){
        printf("\nEnter score of student %d: ",i);
        scanf(" %d",&original_scores[i-1]);
    }
    for(i=0;i<50;i++){
        if(original_scores[i]>max)
            max=original_scores[i];
    }
    
                         //2. Stastics portion
    printf("\nMaximum score by  STUDENT: : %d",max);
    for(i=0;i<50;i++)
    sum= sum+original_scores[i];
    average=sum/50.0;
    printf("\nAverage score of fifty students is: %.3lf",average);
    for(i=0;i<50;i++){
        if(original_scores[i]>70)
        count++;
    }
    printf("\nStudents who scored above 70 are: %d\n\n", count);

    for(i=0;i<50;i++){
    normalized_scores[i]=original_scores[i];
    }
    
                       //3. Conditional Normalization Portion
    if(average<65.0){
    for(i=0;i<50;i++){
        normalized_scores[i]=normalized_scores[i]+10;          //Populating Normalized scores
    if(normalized_scores[i]>100)
    normalized_scores[i]=100;
    }
    }
    
                    //4. Output Portion
    if(average<65.0){
    printf("\nOriginal Score\t\tNormalized Score");
    for(i=0;i<50;i++){
        if(normalized_scores[i]!=original_scores[i])
        printf("\n%d\t\t\t%d",original_scores[i],normalized_scores[i]);
    }
    }
    else
    printf("No BOOST points are increased\n\t\t\tMarks are now same as you entered.");
    return 0;
}
