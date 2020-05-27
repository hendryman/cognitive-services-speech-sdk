//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
package com.microsoft.cognitiveservices.speech;

import java.io.Closeable;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

import com.microsoft.cognitiveservices.speech.util.SafeHandle;
import com.microsoft.cognitiveservices.speech.util.Contracts;
import com.microsoft.cognitiveservices.speech.util.IntRef;
import com.microsoft.cognitiveservices.speech.Recognizer;
import com.microsoft.cognitiveservices.speech.Grammar;

/**
 * Allows adding multiple grammars to a SpeechRecognizer to improve the accuracy of speech recognition.
 *
 * GrammarLists are only usable in specific scenarios and are not generally available.
 */
public final class GrammarList extends Grammar implements Closeable {

    /**
     * Creates a GrammarList from a given speech recognizer.
     *
     * Creating a grammar list from a recognizer is only usable in specific scenarios and is not generally available.
     *
     * @param recognizer The recognizer to get the grammar list from.
     * @return GrammarList associated to the recognizer.
     */
    public static GrammarList fromRecognizer(Recognizer recognizer) {
        IntRef grammarHandleRef = new IntRef(0); 
        Contracts.throwIfFail(fromRecognizer(grammarHandleRef, recognizer.getImpl()));
        return new GrammarList(grammarHandleRef.getValue());
    }

    /**
     * Adds a single grammar to the current recognizer.
     * @param grammar Grammar to add.
     */
    public void add(Grammar grammar) {
        Contracts.throwIfFail(add(getImpl(), grammar.getImpl()));
    }

    /**
     * Dispose of associated resources.
     */
    @Override
    public void close() {
        dispose(true);
    }

    /*! \cond PROTECTED */

    /**
     * This method performs cleanup of resources.
     * The Boolean parameter disposing indicates whether the method is called from Dispose (if disposing is true) or from the finalizer (if disposing is false).
     * Derived classes should override this method to dispose resource if needed.
     * @param disposing Flag to request disposal.
     */
    protected void dispose(boolean disposing) {
        if (disposed) {
            return;
        }

        super.dispose(disposing);

        disposed = true;
    }

    /*! \endcond */

    private boolean disposed = false;

    private GrammarList(long handleValue) {
        super(handleValue);
    }

    private final static native long fromRecognizer(IntRef grammarHandleRef, SafeHandle recoHandle);
    private final native long add(SafeHandle grammarHandle, SafeHandle grammarToAdd);
}