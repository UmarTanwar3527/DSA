class BasicProblems {
    // PRINT NAMES N TIMES
    public static void printNamesNtimes(int start , int n){

        if (start > n){return;}
        System.out.println("Umar Tanwar");
        printNamesNtimes(start + 1, n);

    }

    // PRINT LINERARLY FROM 1 TO N
    public static void printfrom1toN(int start, int n){
        if (start > n){return;}
        System.out.println(start);
        printfrom1toN(start+1,n);
    }

    // PRINT LINERARLY FROM N TO 1
    public static void printfromNto1(int n){
        if (n <= 0){return;}
        System.out.println(n);
        printfromNto1(n-1);
    }

    // PRINT LINERARLY FROM 1 TO N 
    // BUT BY BACKTRACK
    public static void printfrom1toNbacktrack(int start, int n){
        if(start < 1){return;}
        printfrom1toNbacktrack(start - 1, n);
        System.out.println(start);
    }
    // PRINT LINERARLY FROM N TO 1
    // BUT BY BACKTRACK
    public static void printfromNto1backtrack(int start, int n){
        if (start > n){return;}
        printfromNto1backtrack(start + 1, n);
        System.out.println(start);
    }
    public static void main (String [] args) {
        int n = 5;
        // printNamesNtimes(1,n);
        // printfrom1toN(1,n);
        // printfromNto1(n);
        System.out.println("FROM 1 TO N USING BACKTRACK");
        printfrom1toNbacktrack(n,n);
        System.out.println("FROM N TO 1 USING BACKTRACK");
        printfromNto1backtrack(1,n);
    }
}