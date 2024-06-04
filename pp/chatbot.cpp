#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <chrono>
#include <thread>

using namespace std;

// Structure to hold user queries and corresponding responses
struct QueryResponse {
    string query;
    string response;
};

// Binary search algorithm to find the response for a given query
string binarySearch(const vector<QueryResponse>& responses, const string& query) {
    int low = 0;
    int high = responses.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (responses[mid].query == query) {
            return responses[mid].response;
        } else if (responses[mid].query < query) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return "Sorry, I don't have a response for that.";
}

// Function to display a loading bar
void displayLoadingBar() {
    cout << "Loading: ";
    for (int i = 0; i < 20; ++i) {
        cout << "[";
        for (int j = 0; j < i; ++j) {
            cout << "=";
        }
        cout << ">";
        for (int j = i + 1; j < 20; ++j) {
            cout << " ";
        }
        cout << "]";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << "\r";
    }
    cout << "Loading: [====================] Done!" << endl;
}

int main() {
    // Predefined set of user queries and responses
    vector<QueryResponse> responses = {
        {"hello", "Hello there! How can I assist you?"},
        {"how are you", "I'm a chatbot, so I don't have feelings, but I'm here to help!"},
        {"bye", "Goodbye! Have a great day!"},
        // Add more queries and responses as needed
    };

    string username, password;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username != "AMMMAR" || password != "123") {
        cout << "Invalid username or password. Exiting." << endl;
        return 0;
    }

    displayLoadingBar();

    cout << "Welcome, " << username << "!" << endl;
    cout << "G>B: Hi there! I'm your virtual friend, G>B. How can I help you today?" << endl;

    string userInput;

    while (true) {
        cout << "You: ";
        cin.ignore();
        getline(cin, userInput);

        transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);

        string response = binarySearch(responses, userInput);

        cout << "G>B: " << response << endl;

        if (userInput == "bye") {
            break;
        }
    }

    return 0;
}
