#include <bits/stdc++.h>

using namespace std;

bool find(string message, string instruction) {
    return message.find(instruction) != string::npos;
}

string clean(string message) {
    string cleanMessage(1, message[0]);
    int len = message.length();

    for(int i = 1; i < len; i++){
        if (message[i - 1] != message[i]) {
            cleanMessage += message[i];
        }
    }

    return cleanMessage;
}

int main() {

    ifstream in("input.txt");
    ofstream out("output.txt");

    string firstMessage, secondMessage, message;

    int firstMessaggeLen, secondMessageLen, messageLen;

    in >> firstMessaggeLen >> secondMessageLen >> messageLen;

    in >> firstMessage >> secondMessage >> message;

    string cleanMessage = clean(message);

    string answers[] = {"NO", "SI"};

    out << answers[find(cleanMessage, firstMessage)] << '\n';
    out << answers[find(cleanMessage, secondMessage)] << '\n';

    return 0;
}