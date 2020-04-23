//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
package com.microsoft.cognitiveservices.speech.util;

/**
 * Contract helper
 */
public class Contracts {
    /**
     * Checks if the argument is null, if yes, throws a NullPointerException
     * @param obj The object to test for null.
     * @param message The error message in case obj is null.
     * @return
     */
    public static void throwIfNull(Object obj, String message) {
        if(obj == null) {
            throw new NullPointerException(message);
        }
    }

    /**
     * Checks if the long address argument is zero, if yes, throws a NullPointerException
     * @param address The address to test for null.
     * @param message The error message in case address is null.
     * @return
     */
    public static void throwIfNull(long address, String message) {
        if(address == 0) {
            throw new NullPointerException(message);
        }
    }

    /**
     * Checks if the argument is null or whitespace, if yes, throws a IllegalArgumentException
     * or NullPointerException.
     * @param obj The object to test for null.
     * @param message The error message in case obj is null.
     * @return
     */
    public static void throwIfNullOrWhitespace(String obj, String message) {
        if(obj == null) {
            throw new NullPointerException(message);
        }

        if(obj.length() == 0 || obj.trim().length() == 0) {
            throw new IllegalArgumentException(message);
        }
    }

    /**
     * Checks if the language is a valid identifier.
     * @param language The language identifier to test, e.g. "en-US"
     * @param message The error message in case obj is null.
     * @return
     */
    public static void throwIfIllegalLanguage(String language, String message) {
        throwIfNullOrWhitespace(language, message);

        // TODO: implement more tests
    }

    /**
     * Checks if the subscription is a valid identifier.
     * @param subscription The subscription key to test, usually in the form of a guid
     * @param message The error message in case obj is null.
     * @return
     */
    public static void throwIfIllegalSubscriptionKey(String subscription, String message) {
        throwIfNullOrWhitespace(subscription, message);

        // TODO: implement more tests
    }

    /**
     * Checks if the filename exists.
     * @param filename The filename to test
     * @param message The error message in case filename does not exist.
     * @return
     */
    public static void throwIfFileDoesNotExist(String filename, String message) {
        throwIfNullOrWhitespace(filename, message);

        java.io.File file = new java.io.File(filename);

        if(!file.exists() || !file.isFile()) {
            throw new IllegalArgumentException(message);
        }
    }

    /**
     * Checks if the directory exists.
     * @param directory The directory to test
     * @param message The error message in case directory does not exist.
     * @return
     */
    public static void throwIfDirectoryDoesNotExist(String directory, String message) {
        throwIfNullOrWhitespace(directory, message);

        java.io.File file = new java.io.File(directory);

        if(!file.exists() || !file.isDirectory()) {
            throw new IllegalArgumentException(message);
        }
    }

     /**
     * Checks if fail, throws an exception based on the error code or error message.
     * @param hr The error handle
     * @return
     */
    public static void throwIfFail(long hr) {
        if (hr != 0) {
            int error = getErrorCode(hr);
            String message = getErrorMessage(hr);
            if (message == "") {
                message = "Exception with an error code:" + Integer.toString(error);
            }
            releaseErrorHandle(hr);
            throw new IllegalArgumentException(message);
        }
    }

    /**
     * Logs error if fail.
     * @param hr The error handle
     * @return
     */
    public static void logErrorIfFail(long hr) {
        if (hr != 0) {
            int error = getErrorCode(hr);
            String message = getErrorMessage(hr);
            if (message == "") {
                message = "Exception with an error code:" + Integer.toString(error);
            }
            releaseErrorHandle(hr);
        }
    }

    private final static native String getErrorMessage(long errorHandle);
    private final static native String getErrorCallStack(long errorHandle);
    private final static native int getErrorCode(long errorHandle);
    private final static native long releaseErrorHandle(long errorHandle);
}
