class linearRecursion {

    static int linearRecursion( int n ) {
        if (n != 0)
            return n * linearRecursion(n-1);
        else
            return 1;
    }
}
