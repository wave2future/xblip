// -------------------------------------------------------------------------------------------
// "THE BEER-WARE LICENSE" (Revision 42):
// Jakub Suder <jakub.suder@gmail.com> wrote this file. As long as you retain this notice
// you can do whatever you want with this stuff. If we meet some day, and you think this
// stuff is worth it, you can buy me a beer in return.
// (License text originally created by Poul-Henning Kamp, http://people.freebsd.org/~phk/)
// -------------------------------------------------------------------------------------------

#import <Foundation/Foundation.h>

@interface OBMessage : NSObject {
  NSInteger messageId;
  NSString *content;
  NSString *username;
}

@property (nonatomic) NSInteger messageId;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *username;

+ (NSArray *) messagesFromJSONString: (NSString *) json;

- (id) initWithId: (NSInteger) messageId
          content: (NSString *) content
         fromUser: (NSString *) username;

- (id) initWithJSON: (NSDictionary *) json;

@end
