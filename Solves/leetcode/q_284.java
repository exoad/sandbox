// Java Iterator interface reference:
// https://docs.oracle.com/javase/8/docs/api/java/util/Iterator.html

class PeekingIterator implements Iterator<Integer> {
    private Iterator<Integer> x;
    private Integer last;
	public PeekingIterator(Iterator<Integer> iterator) {
	    // initialize any member here.
	    this.x=iterator;
        this.last=x.hasNext()?x.next():null;
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	public Integer peek() {
        return last;
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	@Override
	public Integer next() {
	    Integer b=last;
        this.last=x.hasNext()?x.next():null;
        return b;   
	}
	
	@Override
	public boolean hasNext() {
	    return last!=null;
	}
}