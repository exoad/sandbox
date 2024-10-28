import java.util.concurrent.*;

class Foo {

    public Foo() {
        
    }
    
    Semaphore a=new Semaphore(1, false);
    Semaphore b=new Semaphore(0, false);
    Semaphore c=new Semaphore(0, false);

    public void first(Runnable printFirst) throws InterruptedException {
        a.acquire();
        // printFirst.run() outputs "first". Do not change or remove this line.
        printFirst.run();
        b.release();
    }

    public void second(Runnable printSecond) throws InterruptedException {
        b.acquire();
        // printSecond.run() outputs "second". Do not change or remove this line.
        printSecond.run();
        c.release();
    }

    public void third(Runnable printThird) throws InterruptedException {
        c.acquire();
        // printThird.run() outputs "third". Do not change or remove this line.
        printThird.run();
        a.release();
    }
}