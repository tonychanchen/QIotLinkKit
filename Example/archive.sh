#!/bin/sh

#bin/bsah - l
 
xcodebuild clean -workspace QIotLinkKit.xcworkspace -scheme QIotLinkKit-Example -configuration Debug
 
xcodebuild archive -workspace QIotLinkKit.xcworkspace -scheme QIotLinkKit-Example -configuration Debug -archivePath QIotLinkKit.xcarchive -UseModernBuildSystem=NO
 
 
xcodebuild -exportArchive -archivePath QIotLinkKit.xcarchive -exportOptionsPlist './ExportOptionsDevelop.plist'  -exportPath ./
 
