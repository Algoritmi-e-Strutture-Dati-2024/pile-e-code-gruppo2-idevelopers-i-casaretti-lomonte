int main() {
    Coda<int> coda;

    // coda
    
    coda.enqueue(10);
    coda.enqueue(20);
    coda.enqueue(30);

    std::cout << "primo elemento della coda: " << coda.front() << std::endl;

    std::cout << "Dequeue elemento: " << coda.dequeue() << std::endl;
    std::cout << "Dequeue elemento: " << coda.dequeue() << std::endl;

    std::cout << "Dimensione della coda: " << coda.size() << std::endl;

    Pila<int> pila;

    // pila
    pila.push(10);
    pila.push(20);
    pila.push(30);

    std::cout << "Elemento in cima alla pila: " << pila.top() << std::endl;

    std::cout << "Pop elemento: " << pila.pop() << std::endl;
    std::cout << "Pop elemento: " << pila.pop() << std::endl;

    std::cout << "Dimensione della pila: " << pila.size() << std::endl;

    return 0;
}
