#include <iostream>

// Custom namespace
namespace Myspace {
    // Class Data with an array of generic numbers
    template<typename T>
    class Data {
    private:
        T* arr;
        int size;

        // Helper function to swap two elements
        void swap(T* a, T* b) {
            T temp = *a;
            *a = *b;
            *b = temp;
        }

    public:
        // Constructor
        Data(int size) : size(size) {
            arr = new T[size];
        }

        // Destructor
        ~Data() {
            delete[] arr;
        }

        // Function to set a value at a specific index
        void set(int index, T value) {
            if (index >= 0 && index < size) {
                arr[index] = value;
            } else {
                std::cout << "Index out of bounds" << std::endl;
            }
        }

        // Function to get a value at a specific index
        T get(int index) {
            if (index >= 0 && index < size) {
                return arr[index];
            } else {
                std::cout << "Index out of bounds" << std::endl;
                return T();
            }
        }

        // Bubble sort method
        void bubbleSort() {
            for (int i = 0; i < size-1; i++) {
                for (int j = 0; j < size-i-1; j++) {
                    if (arr[j] > arr[j+1]) {
                        swap(&arr[j], &arr[j+1]);
                    }
                }
            }
        }

        // Method to print the array
        void print() {
            for (int i = 0; i < size; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
    };
}