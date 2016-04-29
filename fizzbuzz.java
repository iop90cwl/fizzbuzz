class FizzBuzz {

    public static void main(String args[]){

    int n;

        for (n = 1; n < 101; n++){

            if (n%3!=0 && n%5!=0){
                    System.out.print(n);
                    System.out.println();}
            else if (n%3==0 && n%5!=0){
                    System.out.print("Fizz \n");}
            else if (n%5==0 && n%3!=0){
                    System.out.print("Buzz \n");}
            else if (n%3==0 && n%5==0){
                    System.out.print("FizzBuzz \n");}
            else{
                    System.out.print("Error. \n");}
        }
    }
}
