---
layout: page
title: Homework
description: Detailed homework information.
nav_order: 2
---

## General Homework Information

Homeworks will be assigned weekly. See the schedule for specific date. In general homework will be released after lecture on Mondays, and will cover material from the previous week as well as the Monday lecture.

Generally, the homework will be due on the following Sunday, *at 11:59pm*. They will include both conceptual and coding components. *The lowest 2 homeworks will be dropped from your grade*.

See our [Homework Policy]({{ "/policies/#homework-policy"| relative_url }}) for more detail.

## Homework Assignments

{% assign homework = site.homework %}
{% for assignment in homework %}
{{ assignment }}
{% endfor %}