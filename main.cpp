int main() {
    Coda<int> coda;

    // coda
    
    coda.enqueue(42);
    coda.enqueue(21);
    coda.enqueue(12);

    std::cout << "primo elemento della coda: " << coda.front() << std::endl;

    std::cout << "de qeueue elemento: " << coda.dequeue() << std::endl;

    std::cout << "Dimensione: " << coda.size() << std::endl;

    Pila<int> pila;

    // pila
    pila.push(1);
    pila.push(32);
    pila.push(23);

    std::cout << "primo elemento della pila: " << pila.top() << std::endl;

    std::cout << "pop elemento: " << pila.pop() << std::endl;

    std::cout << "Dimensione: " << pila.size() << std::endl;

    return 0;
}
