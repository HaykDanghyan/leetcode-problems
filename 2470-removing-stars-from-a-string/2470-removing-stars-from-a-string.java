class Solution {
    public String removeStars(String s) {
        StringBuilder build = new StringBuilder();
        for (int i = 0; i < s.length(); ++i) {
            if (s.charAt(i) == '*') {
                build.deleteCharAt(build.length() - 1);
            } else {
                build.append(s.charAt(i));
            }
        }
        return build.toString();
    }
}