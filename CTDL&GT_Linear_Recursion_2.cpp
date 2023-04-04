//https://www.programiz.com/
class linearRecursion{

    static int linearRecursion( int n ) {
        if (n != 0)  
            return n * linearRecursion(n-1); 
        else
            return 1;
    }

    public static void main(String[] args) {
        int number = 4, result;
        result = linearRecursion(number);
        System.out.println(number + " linearRecursion = " + result);
    }
}
