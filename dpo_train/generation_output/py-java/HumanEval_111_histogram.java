### Python version

from typing import Dict

def histogram(test: str) -> Dict[str, int]:
    dict1={}
    list1=test.split(" ")
    t=0

    for i in list1:
        if(list1.count(i)>t) and i!='':
            t=list1.count(i)
    if t>0:
        for i in list1:
            if(list1.count(i)==t):
                
                dict1[i]=t
    return dict1

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static HashMap<String,Long> histogram(String test) {
        HashMap<String,Long> histogram = new HashMap<>();
        List<String> list = test.split(" ");
        for (String s : list) {
            if(s!=null) {
                if(s.length()>0) {
                    if(s.charAt(0)=='(') {
                        String[] ss = s.split("[(]");
                        for (String s1 : ss) {
                            if(s1!=null) {
                                if(s1.length()>0) {
                                    if(s1.charAt(0)=='(') {
                                        String[] ss1 = s1.split("[(]");
                                        for (String s2 : ss1) {
                                            if(s2!=null) {
                                                if(s2.length()>0) {
                                                    if(s2.charAt(0)=='(') {
                                                        String[] ss2 = s2.split("[(]");
                                                        for (String s3 : ss2) {
                                                            if(s3!=null) {
                                                                if(s3.length()>0) {
                                                                    if(s3.charAt(0)=='(') {
                                                                        String[] ss3 = s3.split("[(]");
                                                                        for (String s4 : ss3) {
                                                                            if(s4!=null) {
                                                                                if(s4.length()>0) {
                                                                                    if(s4.charAt(0)=='(') {
                                                                                        String[] ss4 = s4.split("[(]");
                                                                                        for (String s5 : ss4) {
                                                                                            if(s5!=null) {
                                                                                             if(s5.length()>0) {
                                                                                                   if(s5.charAt(0)=='(') {
                                                                                                      String[] ss5 = s5.split("[(]");
                                                                                                      for (String s6 : ss5) {
                                                                                                       if(s6!=null) {
                                                                                                           if(s6.length()>0) {
                                                                                                               if(s6.charAt(0)=='(') {
                                                                                                                       String[] ss6 = s6.split("[(]");
                                                                                                                       for (String s7 : ss6) {
                                                                                                                           if(s7!=null) {
                                                                                                                            if(s7.length()>0) {
                                                                                                                                  if(s7.charAt(0)=='(') {
                                                                                                                                       String[] ss7 = s7.split("[(]");
                                                                                                                                       for (String s8 : ss7) {
                                                                                                                                       if(s8!=null) {
                                                                                                                                           if(s8.length()>0) {
                                                                                                                                               if(s8.charAt(0)=='(') {
                                                                                                                                               	String[] ss8 = s8.