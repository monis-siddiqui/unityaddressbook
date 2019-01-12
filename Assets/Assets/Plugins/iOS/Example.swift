//
//  Example.swift
//  Unity-iPhone
//
//  Created by Masayuki Iwai on 7/10/16.
//
//

import Foundation
import Contacts

class Example : NSObject {
    static func callUnityMethod(_ firstName: String, lastName: String, company: String, number: String ) {
        //var lastName = lastName, company = company, number = number
        // Call a method on a specified GameObject.
        // Call a method on a specified GameObject.
        let store = CNContactStore()
        
        let contactToAdd = CNMutableContact()
        contactToAdd.givenName = firstName
        contactToAdd.familyName = lastName
        contactToAdd.organizationName = company
        
        let mobileNumber = CNPhoneNumber(stringValue: (number))
        let mobileValue = CNLabeledValue(label: CNLabelPhoneNumberMobile, value: mobileNumber)
        contactToAdd.phoneNumbers = [mobileValue]
        let saveRequest = CNSaveRequest()
        saveRequest.add(contactToAdd, toContainerWithIdentifier: nil)
        
        do {
            try store.execute(saveRequest)
        } catch {
            print(error)
        }
        UnitySendMessage("CallbackTarget", "OnCallFromSwift", message)
    }
    
    static func swiftMethod(_ firstName: String,_ lastName: String,_ company: String,_ number: String ) {
        //var lastName = lastName, company = company, number = number
        //print("\(#function) is called with message")
        
        self.callUnityMethod(firstName,lastName: lastName,company: company,number: number)
    }
}
