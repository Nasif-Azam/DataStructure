if (front == -1)
    {
        printf("No element to delete.\n");
    }
    else
    {
        printf("Deleted element: %d\n", a[front]);
        front = front + 1;
        if (front > rear)
            front = rear = -1;
    }