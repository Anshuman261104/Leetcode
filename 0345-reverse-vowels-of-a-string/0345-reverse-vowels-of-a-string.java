class Solution {
    public String reverseVowels(String s) {
        char[] vowels= {'a', 'e', 'i', 'o', 'u'};
        char[] arr= s.toCharArray();

        for(int i=0, j=s.length()-1; i<j; i++){
            boolean left = false;
            char first=' ';
            for(char v : vowels){
                if( v== Character.toLowerCase(arr[i])){
                    left= true;
                    first= arr[i];
                    break;
                }
            }
            if(!left) continue;

            boolean right= false;
            char last=' ';
            while(i < j){
                for(char v : vowels){
                    if(v==Character.toLowerCase(arr[j])){
                        right= true;
                        last=arr[j];
                        break;
                    }
                }
                if(right) break;
                j--;
            }
            if(i < j){
                arr[i]=last;
                arr[j]=first;
                j--;
            }
        }
        return new String(arr);
    }
}