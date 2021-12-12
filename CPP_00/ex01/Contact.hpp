#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
    public:
        Contact(void) = default;
        Contact(const Contact &others);
        ~Contact(void) = default;
        void    setFirtsName(std :: string _name);
        void    setLastName(std :: string _last);
        void    setSecret(std :: string _secret);
        void    setNick(std :: string _nickname);
        void    setNumber(long long num);
        std :: string   getFirtsName(void) const;
        std :: string   getLastName(void) const;
        std :: string   getSecret(void) const;
        std :: string   getNick(void) const;
        long long       getNumber(void) const;
    private:
        std :: string   firstName;
        std :: string   lastName;
        std :: string   darkestSecret;
        std :: string  nickname;
        long long       phoneNumber;     
};

#endif