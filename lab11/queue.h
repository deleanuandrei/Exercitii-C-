//#ifndef QUEUE_H
#define QUEUE_H 

using namespace std;

template <class T>
class Queue
{
	public:
    	Queue(int = 0);
    	~Queue(){delete[] QueuePtr;};
    	bool Inserare(const T&);
    	bool Eliminare( T&);
    	void Afisare();
	protected:
    	int lungime;
    	int top;
    	int inceput;
    	T* QueuePtr;
};

template <class T>
Queue<T>::Queue(int l)
{
    lungime = l;
    top = -1;
    inceput = 0;
    QueuePtr = new T[lungime];
}

template <class T>
bool Queue<T>::Inserare(const T& pushValue)
{
    if(top != lungime-1)
	{
        QueuePtr[++top] = pushValue;
        return 1;
    }
    return 0;
}

template <class T>
bool Queue<T>::Eliminare( T& outValue)
{
    if(inceput != lungime)
	{
        outValue = QueuePtr[inceput++];
        return 1;
    }
    return 0;
}

template <class T>
void Queue<T>::Afisare()
{
    for(int i = inceput; i < lungime; i++)
	{
        cout << QueuePtr[i] << " ";
    }
}

