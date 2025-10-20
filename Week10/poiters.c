int main()
{

    int score =50;
    int *score_ptr = &score;
//or
    score_ptr = &score ;

    *score_ptr = 100;
    int y= *score_ptr;


    printf("The value stored in ptr = %d",score);


}