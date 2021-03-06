#Distributed under the MIT licesnse.
#Copyright (c) 2013 Cospan Design (dave.mccoy@cospandesign.com)

#Permission is hereby granted, free of charge, to any person obtaining a copy of
#this software and associated documentation files (the "Software"), to deal in
#the Software without restriction, including without limitation the rights to
#use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
#of the Software, and to permit persons to whom the Software is furnished to do
#so, subject to the following conditions:
#
#The above copyright notice and this permission notice shall be included in all
#copies or substantial portions of the Software.
#
#THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
#IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
#FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
#AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
#LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
#OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
#SOFTWARE.

import os
import json

import utils

def find_elf2img(env):
    """
    Returns the path to the assembler from the configuration file

    Args:
        config (dictionary): configuration dictionary

    Return:
        (string): Path to the assembler

    Raises:
        Nothing
    """
    config = utils.read_config(env)
    try:
        i2e_path = os.path.join(config["elf2img_path"], "elf2img")
    return i2e_path

def get_elf2img_outfile(env):
    """
    Returns a list of c sources

    Args:
        env (Scons.Envrionment): An environment to add all the tools too

    Returns:
        (list of paths): paths to be fed into the compiler

    Raises:
        Nothing
    """
    config = utils.read_config(env)
    outfile = os.path.join(config["build_dir"], "out.img")
    return outfile
