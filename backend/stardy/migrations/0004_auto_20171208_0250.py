# -*- coding: utf-8 -*-
# Generated by Django 1.11.7 on 2017-12-08 02:50
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('stardy', '0003_groupplc_material'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='user',
            name='profile_address',
        ),
        migrations.AddField(
            model_name='user',
            name='profile_image',
            field=models.ImageField(null=True, upload_to=''),
        ),
    ]
