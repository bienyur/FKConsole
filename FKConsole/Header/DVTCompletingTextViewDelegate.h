//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class DVTCompletingTextView, DVTTextDocumentLocation;

@protocol DVTCompletingTextViewDelegate <NSTextViewDelegate>

@optional
- (void)setupTextViewContextMenuWithMenu:(NSMenu *)arg1;
- (BOOL)completingTextViewHandleCancel:(DVTCompletingTextView *)arg1;
- (unsigned long long)textView:(DVTCompletingTextView *)arg1 lineEndingForWritingSelectionToPasteboard:(NSPasteboard *)arg2 type:(NSString *)arg3;
- (unsigned long long)textView:(DVTCompletingTextView *)arg1 lineEndingForReadingSelectionFromPasteboard:(NSPasteboard *)arg2 type:(NSString *)arg3;
- (void)textView:(DVTCompletingTextView *)arg1 layoutManager:(NSLayoutManager *)arg2 didLayoutGlyphsUpToCharacterIndex:(unsigned long long)arg3;
- (DVTTextDocumentLocation *)completingTextView:(DVTCompletingTextView *)arg1 documentLocationForWordStartLocation:(unsigned long long)arg2;
- (void)completingTextView:(DVTCompletingTextView *)arg1 willPassContextToStrategies:(NSMutableDictionary *)arg2 atWordStartLocation:(unsigned long long)arg3;
@end