#include "ForeignPassport.h"


ForeignPassport::ForeignPassport()
    : Passport(), mForeignPassportNumber("Unknown"), mVisaCount(0), mVisaCapacity(5) {
    mVisas = new string[mVisaCapacity]; // Инициализация динамического массива
}

ForeignPassport::ForeignPassport(Passport* passport, const string& foreignPassportNumber)
    : Passport(*passport), // Инициализация базового класса с использованием копирующего конструктора
    mForeignPassportNumber(foreignPassportNumber), mVisaCount(0), mVisaCapacity(5) {
    mVisas = new string[mVisaCapacity]; // Инициализация динамического массива для виз
}



ForeignPassport::ForeignPassport(const string& fullName, const string& dateOfBirth, const string& citizenship,
    const string& issueDate, const string& expirationDate, const string& foreignPassportNumber)
    : Passport(fullName, dateOfBirth, citizenship, issueDate, expirationDate),
    mForeignPassportNumber(foreignPassportNumber), mVisaCount(0), mVisaCapacity(5) {
    mVisas = new string[mVisaCapacity];
}


ForeignPassport::~ForeignPassport() {
    delete[] mVisas; 
}


string ForeignPassport::getForeignPassportNumber() const {
    return mForeignPassportNumber;
}

void ForeignPassport::setForeignPassportNumber(const string& foreignPassportNumber) {
    mForeignPassportNumber = foreignPassportNumber;
}


bool ForeignPassport::addVisa(const string& visa) {
    if (mVisaCount >= mVisaCapacity) {

        mVisaCapacity *= 2;
        string* newVisas = new string[mVisaCapacity];
        for (int i = 0; i < mVisaCount; ++i) {
            newVisas[i] = mVisas[i];
        }
        delete[] mVisas; 
        mVisas = newVisas;
    }
    mVisas[mVisaCount++] = visa;
    return true;
}


bool ForeignPassport::removeVisa(const string& visa) {
    for (int i = 0; i < mVisaCount; ++i) {
        if (mVisas[i] == visa) {

            for (int j = i; j < mVisaCount - 1; ++j) {
                mVisas[j] = mVisas[j + 1];
            }
            --mVisaCount;
            return true;
        }
    }
    return false; 
}


void ForeignPassport::printVisas() const {
    cout << "Visas: ";
    for (int i = 0; i < mVisaCount; ++i) {
        cout << mVisas[i];
        if (i < mVisaCount - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}
