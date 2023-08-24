class Solution {
    public boolean isAnagram(String s, String t) {
        char arr[]=s.toCharArray();
        char arr2[]=t.toCharArray();
        Arrays.sort(arr);
        Arrays.sort(arr2);

        String x=new String(arr);
        String p=new String(arr2);

        if(x.equals(p)){
            return true;
        }
        else{
        return false;
        }

    }
}
