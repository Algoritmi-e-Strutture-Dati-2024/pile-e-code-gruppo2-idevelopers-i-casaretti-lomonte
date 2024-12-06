int main() {
    Coda<int> coda;

    // coda
    
    coda.enqueue(42);
    coda.enqueue(21);
    coda.enqueue(12);

    std::cout << "primo elemento della coda: " << coda.front() << std::endl;

    std::cout << "Dequeue elemento: " << coda.dequeue() << std::endl;
    std::cout << "Dequeue elemento: " << coda.dequeue() << std::endl;

    std::cout << "Dimensione della coda: " << coda.size() << std::endl;

    Pila<int> pila;

    // pila
    pila.push(1);
    pila.push(32);
    pila.push(23);

    std::cout << "Elemento in cima alla pila: " << pila.top() << std::endl;

    std::cout << "Pop elemento: " << pila.pop() << std::endl;
    std::cout << "Pop elemento: " << pila.pop() << std::endl;

    std::cout << "Dimensione della pila: " << pila.size() << std::endl;

    return 0;
}
