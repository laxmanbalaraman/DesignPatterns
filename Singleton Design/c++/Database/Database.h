#pragma once

class Database {
    
    public:

    virtual ~Database() = default;
    virtual void loadDatabase() = 0;
};


class SingletonDatabase : public Database {

    static SingletonDatabase* instance;
    SingletonDatabase() {};

    public:
    void loadDatabase() override;
    static SingletonDatabase* createDatabase();

};