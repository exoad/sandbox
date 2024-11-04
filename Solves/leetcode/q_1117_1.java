import java.util.concurrent.Semaphore;

class H2O {

    public H2O() {
        
    }

    public static final Semaphore a=new Semaphore(2,false);
    public static final Semaphore b=new Semaphore(0,false);

    public void hydrogen(Runnable releaseHydrogen) throws InterruptedException {
		a.acquire();
        // releaseHydrogen.run() outputs "H". Do not change or remove this line.
        releaseHydrogen.run();
        b.release();
    }

    public void oxygen(Runnable releaseOxygen) throws InterruptedException {
        b.acquire(2);
        // releaseOxygen.run() outputs "O". Do not change or remove this line.
		releaseOxygen.run();
        a.release(2);
    }
}