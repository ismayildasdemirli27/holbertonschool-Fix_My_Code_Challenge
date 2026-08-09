#!/usr/bin/python3
"""
User class with secure password handling and validation fix
"""

class User:
    """ Defines a User class """
    def __init__(self):
        self.email = None
        self.password = None

    @property
    def email(self):
        return self.__email

    @email.setter
    def email(self, email):
        if email is not None and not isinstance(email, str):
            raise TypeError("email must be a string")
        self.__email = email

    @property
    def password(self):
        return self.__password

    @password.setter
    def password(self, password):
        if password is not None and not isinstance(password, str):
            raise TypeError("password must be a string")
        self.__password = password

    def is_valid_password(self, password):
        """ Returns True if password matches, False otherwise """
        if password is None or self.__password is None:
            return False
        if not isinstance(password, str):
            return False
        return password == self.__password
