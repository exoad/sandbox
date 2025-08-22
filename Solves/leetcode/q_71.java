class Solution {
    public String simplifyPath(String path) {
        final var folders = path.split("/");
        final var stack = new ArrayDeque<String>();
        for(final var folder: folders) {
            if(!folder.isEmpty() && !folder.equals(".")) {
                if(folder.equals("..")) {
                    if(!stack.isEmpty()) {
                        stack.pollLast();
                    }
                } else {
                    stack.offerLast(folder);
                }
            }
        }
        final var sb = new StringBuilder();
        for(final var dir: stack) {
            sb.append('/').append(dir);
        }
        return sb.length() == 0 ? "/" : sb.toString();
    }
}
