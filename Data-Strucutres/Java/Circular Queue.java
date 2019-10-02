import java.util.*;//incliding package
class circular_queue
{   //opeaning of main
    Scanner sc=new Scanner(System.in);
    int cque[]=new int[10];
    int front,rear,size;
    circular_queue()//default constructor
    {
        for(int i=0;i<10;i++)
        {
            cque[i]=0;
        }
        front=-1;
        rear=-1;
    }

    void insert(int n)//inserting element
    {
        if(front>rear||rear==size-1&&front==0)//c-queue is full
        {
            System.out.println("Circular queue is overflow");
        }
        else
        {
            if(front==-1&&rear==-1)
            {
                rear=0;
                front=0;
            }
            else
            if(rear==size-1)
            {
                rear=0;
            }
            else
            {
                rear++;//increment rear
            }
            cque[rear]=n;
        }
    }

    void delete()//deleting element
    {
        if(front==-1&&rear==-1)//c-queue is empty
        {
            System.out.println("Circular queue is underflow");
        }
        else
        {
            System.out.println("element = "+cque[front]);//print element 
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            else
            if(front==size-1)
            {
                front=0;
            }
            else
            {
                front++;//increment front
            }
        }
    }

    void display()//display element of c-queue
    {
        if(front==-1)//c-queue is empty
        {
            System.out.println("Circular queue is empty");
        }
        else
        if(rear>=front)
        {
            for(int i=front;i<=rear;i++)
            {
                System.out.println("element = "+cque[i]);
            }
        }
        else
        {
            for(int i=0;i<=rear;i++)
            {
                System.out.println("element = "+cque[i]);
            }
            for(int i=front;i<=size-1;i++)
            {
                System.out.println("element = "+cque[i]);
            }
        }
    }

    public void main()//opeaning of main
    {
        circular_queue ob=new circular_queue();
        System.out.println("Enter size");
        size=sc.nextInt();//input size
        char ch1;
        do
        {   //enter choice
            System.out.println("Enter choice \n 1= Insert \n 2= Delete \n 3= Display");
            int ch=sc.nextInt();
            switch(ch)
            {
                case 1: System.out.println("Enter Number");
                int n=sc.nextInt();
                insert(n);
                break;
                case 2: delete();
                break;
                case 3: display();
            }
            System.out.println("Enter Yes to continue or No to exit.");
            ch1=sc.next().charAt(0);
        }while(ch1=='y'||ch1=='Y');
    }
}